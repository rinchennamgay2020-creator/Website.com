<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>Rinchen Namgay — Portfolio</title>
  <style>
    :root {
      --bg: #0d0f18;
      --text: #e9eef7;
      --accent: #6366f1;
      --muted: #a1accb;
      --card: #151827;
      --radius: 14px;
      font-family: "Inter", system-ui, sans-serif;
    }
    * { box-sizing: border-box; }
    body { margin: 0; background: var(--bg); color: var(--text); }

    /* NAVBAR */
    nav {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 18px 40px;
      background: rgba(0,0,0,0.2);
      backdrop-filter: blur(12px);
      position: sticky;
      top: 0;
      z-index: 10;
      border-bottom: 1px solid rgba(255,255,255,0.06);
    }
    nav .links a {
      margin-left: 26px;
      text-decoration: none;
      color: var(--text);
      font-weight: 600;
      transition: 0.2s;
      position: relative;
    }
    nav .links a.active {
      color: var(--accent);
    }
    nav .links a.active::after {
      content: '';
      position: absolute;
      bottom: -6px;
      left: 0;
      width: 100%;
      height: 2px;
      background: var(--accent);
      border-radius: 1px;
    }
    nav .links a:not(.active):hover { color: var(--muted); }

    /* WRAPPER */
    .wrap { max-width: 1100px; margin: 0 auto; padding: 40px 28px; }

    /* HERO SECTION */
    .hero {
      display: flex;
      gap: 40px;
      align-items: center;
      padding-top: 40px;
      padding-bottom: 40px;
    }
    .hero img {
      width: 220px;
      height: 220px;
      border-radius: 50%;
      object-fit: cover;
      box-shadow: 0 10px 40px rgba(0,0,0,0.6);
      /* Add a default background for the blank image space */
      background: var(--muted); 
    }
    .hero h1 { font-size: 38px; margin: 0; }
    .hero p { color: var(--muted); max-width: 600px; }

    /* CARDS AND SECTIONS */
    .section { margin-top: 60px; }
    .card {
      background: var(--card);
      padding: 28px;
      border-radius: var(--radius);
      box-shadow: 0 8px 30px rgba(0,0,0,0.4);
      line-height: 1.7;
      /* HIDDEN BY DEFAULT: Initial state for the reveal effect */
      opacity: 0;
      transform: translateY(20px);
      transition: opacity 0.5s ease-out, transform 0.5s ease-out;
    }
    
    /* REVEALED STATE: Content shows when the 'active-view' class is applied by JS */
    .section.active-view .card {
      opacity: 1;
      transform: translateY(0);
    }
    
    h2 { font-size: 28px; margin-bottom: 12px; }
    h3 { margin-top: 26px; font-size: 20px; }

    /* FOOTER */
    footer {
      margin-top: 60px;
      text-align: center;
      padding: 20px 0;
      color: var(--muted);
      font-size: 14px;
    }

  </style>
</head>
<body>
  <nav>
    <div class="logo" style="font-weight:800;color:var(--accent);font-size:18px">Rinchen Namgay</div>
    <div class="links">
      <a href="#home" class="nav-link">Home</a>
      <a href="#journey" class="nav-link">Journey</a>
      <a href="#projects" class="nav-link">Projects</a>
      <a href="#contact" class="nav-link">Contact</a>
    </div>
  </nav>

  <div class="wrap">
    <section id="home" class="hero section active-view">
      <img src="" alt="Portrait of Rinchen Namgay (Image Placeholder)" />
      <div>
        <h1>Rinchen Namgay</h1>
        <p>Twelfth-grade student at The Royal Academy — passionate about basketball, technology, languages, culture, and holistic learning.</p>
      </div>
    </section>

    <section id="journey" class="section">
      <h2>My Journey at The Royal Academy</h2>
      <div class="card">
        <p><strong>Name:</strong> Rinchen Namgay<br><strong>Mentor:</strong> Tshering Lham</p>

        <p>My name is Rinchen Namgay, and I joined The Royal Academy on February 21st, 2020, as a curious seventh grader eager to explore a new environment. I believed school was only about studying and competition—until my first week, when I performed a Lozay with my friend Sumjay in front of the entire school. That moment expanded my confidence and showed me the value of stepping beyond comfort zones.</p>

        <p>The COVID-19 pandemic disrupted learning and discipline. I struggled with online classes, delayed work, and weakening comprehension. Returning in 2021 required rebuilding my academic foundations. Eighth grade became a turning point. I read extensively, improving communication and comprehension. I wrote the Dzongkha script for the drama <em>Ba Gachu Lham</em>, which strengthened my connection to Bhutanese culture. BCSEA exams brought pressure, requiring late-night study and resilience.</p>

        <p>Ninth grade introduced Life Science, blending physics, chemistry, and biology. Tenth grade separated them again, forcing me to reinforce each subject individually. The Academy’s systems—roadmaps, five areas of development, Ngondro, watermarks, and nine qualities—guided my recovery and growth.</p>

        <p>I explored foreign languages, beginning with Japanese (Duolingo, JapanesePod101), learning honorifics, food vocabulary, and obligation forms. Later, I began French, expanding my global awareness and complementing programs like G-PIE.</p>

        <p>Sports shaped my identity. I had no sports background initially, but basketball became my passion. I trained rigorously, coached juniors, co-led tournaments, and played at local and national levels. An internship with the Bhutan Olympic Committee deepened my skills in sports media, photography, and event management.</p>

        <p>My interest in technology grew through managing the Fab Lab. I worked with laser printers, 3D printers, CNC machines, and Arduino programming. I was responsible for maintaining the electric cycles gifted by His Majesty—an opportunity that built responsibility and discipline.</p>

        <p>I participated in drama, acting as Portia in <em>The Merchant of Venice</em>. Performing expanded my confidence, critical thinking, and interest in law and politics. I joined the dance team, contributed to the school e-book, and explored cultural expression through multiple creative works.</p>

        <p>Community-based learning shaped my identity. I joined the 108th showcase, retreats, tshechhus, and nationwide field trips to Wangduephodrang, Haa, Gasa, Punakha, Thimphu, and more. These experiences strengthened my understanding of spirituality, nature, society, and culture.</p>

        <p>A major milestone was participating in G-PIE, representing The Royal Academy internationally. Engaging with students from India enhanced my intercultural competence, communication, and global mindset.</p>

        <p>Daily moments—cooking at the Director’s house, creating vlogs, managing tournaments, and exploring Bhutan—shaped my values. Through these experiences, I have grown intellectually, socially, emotionally, physically, and spiritually.</p>

        <p>Now, as a twelfth grader, I stand prepared for life beyond school. My journey at The Royal Academy has shaped me into a resilient, curious, and grounded individual who values learning, culture, and contribution.</p>
        <p></p>
      </div>
    </section>

    <section id="projects" class="section">
      <h2>Projects & Work</h2>
      <div class="card">
        <ul>
          <li>Managing Fab Lab — 3D printing, CNC, laser cutting, Arduino.</li>
          <li>Maintaining electric cycles gifted by His Majesty.</li>
          <li>Dzongkha script writing for <em>Ba Gachu Lham</em>.</li>
          <li>Sports media & photography — BOC internship.</li>
          <li>Basketball coaching and tournament leadership.</li>
          <li>Vlog creation and media documentation.</li>
        </ul>
      </div>
    </section>

    <section id="contact" class="section">
      <h2>Contact</h2>
      <div class="card">
        <p>Email: youremail@example.com</p>
        <p>Location: Chukha, Bhutan</p>
      </div>
    </section>

    <footer>© 2025 Rinchen Namgay — Portfolio Website</footer>
  </div>

  <script>
    document.addEventListener('DOMContentLoaded', () => {
      const sections = document.querySelectorAll('.section');
      const navLinks = document.querySelectorAll('.nav-link');

      // --- SECTION VISIBILITY & NAVIGATION HIGHLIGHT LOGIC ---
      const observerOptions = {
        root: null,
        rootMargin: '0px 0px 0px 0px', 
        threshold: 0 
      };

      const observerCallback = (entries) => {
        entries.forEach(entry => {
          const section = entry.target;
          const id = section.id;
          
          if (entry.isIntersecting) {
            // 1. REVEAL CONTENT
            section.classList.add('active-view');
          } else {
            // 2. HIDE CONTENT
            if (id !== 'home') { 
              section.classList.remove('active-view');
            }
          }
          
          // 3. HIGHLIGHT NAV LINK
          navLinks.forEach(link => link.classList.remove('active'));
          
          // Find the topmost active-view section and highlight its link
          const activeSections = Array.from(document.querySelectorAll('.section.active-view'));
          if (activeSections.length > 0) {
              const topmostActiveSection = activeSections[0];
              const activeId = topmostActiveSection.id;
              const activeLink = document.querySelector(`nav a[href="#${activeId}"]`);
              if (activeLink) {
                 activeLink.classList.add('active');
              }
          }
          
        });
      };

      const scrollObserver = new IntersectionObserver(observerCallback, observerOptions);
      
      sections.forEach(section => {
        scrollObserver.observe(section);
      });
      // ------------------------------------------

    });
  </script>
</body>
</html>